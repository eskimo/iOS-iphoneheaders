/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/Support/calaccessd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <calaccessd/calaccessd-Structs.h>
#import <calaccessd/CADOperationGroup.h>
#import <calaccessd/CADObjectInterface.h>

@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADObjectExists:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObjectsExist:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getPropertiesWithNames:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getStringPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getNumberPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getDatePropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getDataPropertyWithName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getRelatedObjectWithRelationName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 getRelatedObjectsWithRelationName:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADObject:(SCD_Struct_CA1)arg1 setAttributes:(id)arg2 andRelations:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseDeleteObjectsWithObjectIDs:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
