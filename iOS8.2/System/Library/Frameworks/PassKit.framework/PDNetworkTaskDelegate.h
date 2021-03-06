/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PDNetworkTaskDelegate <NSObject>
@optional
-(void)taskRequestedReauthentication:(id)arg1;

@required
-(void)task:(id)arg1 gotResult:(id)arg2;
-(void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;
-(void)taskSucceeded:(id)arg1;
-(void)taskFailed:(id)arg1;
-(void)task:(id)arg1 encounteredError:(id)arg2;
-(void)task:(id)arg1 encounteredWarnings:(id)arg2;

@end

