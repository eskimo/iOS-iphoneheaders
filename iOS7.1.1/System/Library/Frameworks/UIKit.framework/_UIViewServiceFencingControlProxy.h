/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIQueueingProxy.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class _UIViewServiceFencingController;

@interface _UIViewServiceFencingControlProxy : _UIQueueingProxy <XPCProxyTarget> {

	_UIViewServiceFencingController* _fencingController;

}
+(id)proxyWithTarget:(id)arg1 fencingController:(id)arg2 exportedProtocol:(id)arg3 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)__beginFencingMessagesWithSendRight:(id)arg1 connectionCount:(unsigned long long)arg2 ;
-(void)__endFencingMessagesForSendRight:(id)arg1 ;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
@end
