/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBDaemonHandler : NSObject
+(id)stateDescription;
+(BOOL)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3 ;
+(void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2 ;
+(void)noteDaemonCanceled:(id)arg1 ;
+(void)initialize;
@end

