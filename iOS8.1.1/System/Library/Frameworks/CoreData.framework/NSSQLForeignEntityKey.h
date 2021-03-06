/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSQLForeignKey;

@interface NSSQLForeignEntityKey : NSSQLColumn {

	NSSQLForeignKey* _foreignKey;

}
-(id)foreignKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)toOneRelationship;
-(id)initWithEntity:(id)arg1 foreignKey:(id)arg2 ;
-(id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2 ;
-(void)setFKForReadOnlyFetch:(id)arg1 ;
-(void)dealloc;
@end

