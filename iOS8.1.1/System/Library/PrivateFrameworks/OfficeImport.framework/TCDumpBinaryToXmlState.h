/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface TCDumpBinaryToXmlState : NSObject {

	NSString* mCurrentFieldName;
	NSMutableDictionary* mFieldNameToValueMap;

}
-(void)dealloc;
-(id)init;
-(void)setCurrentField:(id)arg1 ;
-(void)cacheValueforCurrentField:(id)arg1 ;
-(id)valueForCurrentField;
-(id)valueForField:(id)arg1 ;
@end

