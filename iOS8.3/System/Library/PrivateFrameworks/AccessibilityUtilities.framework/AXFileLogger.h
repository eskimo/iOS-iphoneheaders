/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:32:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXFileLogger : NSObject {

	NSString* _filePath;

}

@property (nonatomic,copy) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(id)defaultFileLogger;
-(void)log:(id)arg1 ;
-(void)dealloc;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 ;
@end

