/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {

	NSMutableDictionary* _names;

}
+(id)defaultMappingGenerator;
+(void)invalidate;
-(id)uniqueNameWithBase:(id)arg1 ;
-(id)newGeneratedPropertyName:(id)arg1 ;
-(id)generateTableName:(id)arg1 ;
-(id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
@end

