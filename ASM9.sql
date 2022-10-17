create table supplier(
	code varchar(255) primary key identity(1,1),
	Name nvarchar(255) not null,
	Address nvarchar(255) not null,
	Telephone varchar(15) not null unique check(Telephone like '0%'),
	Taxcode int not null,
);
create table typeofservice(
	Code int primary key identity(1,1),
	Name nvarchar(255) not null,
);

drop table typeofservice;

create table charges(
	code int primary key identity(1,1),
	unitprice decimal(12,4) not null ,
	describe nvarchar(255) not null,
);

drop table charges;
create table vehicles(
	vehicles nvarchar(255) primary key identity(1,1),
	carcompany nvarchar(255) not null,
	numberofseats int not null,
);
 
create table offersignup(
	Code varchar(255) primary key identity(1,1),
	supplystartdate date not null,
	offerenddate date not null,
	numberofregisteredvehicles int not null,
	codesupplier varchar(255) not null foreign key references supplier(Code),
	codetypeofsevervice int not null foreign key references typeofsevervice(Code),
	codecharges varchar(255) not null foreign key references charges(Code),
	vehicles varchar(255) not null foreign key references vehicles(vehicles),
);

