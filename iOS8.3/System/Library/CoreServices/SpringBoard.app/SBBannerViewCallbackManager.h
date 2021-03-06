/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBUIBannerView, SBUIBannerSource;
@class UIView;

@interface SBBannerViewCallbackManager : NSObject {

	UIView*<SBUIBannerView> _view;
	id<SBUIBannerSource> _source;
	char _sentWillAppear;
	char _sentDidAppear;
	char _sentWillDismiss;
	char _sentDidDismiss;
	int _dismissReason;

}
-(id)initWithBannerView:(id)arg1 ;
-(char)hasSentAnyCallbacks;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)matchPreviousCallbacks:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

