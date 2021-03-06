/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SYTransportLog : NSObject {

	NSString* _rootPath;
	NSString* _facility;

}

@property (nonatomic,copy) NSString * facility;              //@synthesize facility=_facility - In the implementation block
+(id)sharedInstance;
+(id)_logPath;
-(id)init;
-(NSString *)facility;
-(BOOL)_ensureFolder;
-(id)_setupLog;
-(void)logMessage:(id)arg1 args:(char*)arg2 ;
-(void)_logMessage:(id)arg1 file:(const char*)arg2 line:(int)arg3 function:(const char*)arg4 ;
-(void)setFacility:(NSString *)arg1 ;
-(void)logMessage:(id)arg1 ;
@end

