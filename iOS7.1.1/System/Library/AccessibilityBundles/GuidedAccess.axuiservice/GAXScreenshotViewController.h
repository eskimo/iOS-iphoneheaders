/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>

@protocol GAXEventStealerViewDelegate;
@class GAXStyleProvider, UIImage, GAXInterestAreaViewController, UIImageView, UIView, GAXEventStealerView;

@interface GAXScreenshotViewController : GAXViewController {

	bool _shouldStealAllEvents;
	GAXStyleProvider* _styleProvider;
	UIImage* _clientApplicationScreenshotImage;
	double _shadowAlpha;
	GAXInterestAreaViewController* _interestAreaViewController;
	<GAXEventStealerViewDelegate>* _eventStealerViewDelegate;
	UIImageView* _screenshotView;
	UIView* _shadowView;

}

@property (nonatomic,retain) GAXStyleProvider * styleProvider;                                        //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIImage * clientApplicationScreenshotImage;                              //@synthesize clientApplicationScreenshotImage=_clientApplicationScreenshotImage - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                                      //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (nonatomic,retain) GAXInterestAreaViewController * interestAreaViewController;              //@synthesize interestAreaViewController=_interestAreaViewController - In the implementation block
@property (assign,nonatomic) bool shouldStealAllEvents;                                               //@synthesize shouldStealAllEvents=_shouldStealAllEvents - In the implementation block
@property (assign,nonatomic) <GAXEventStealerViewDelegate> * eventStealerViewDelegate;                //@synthesize eventStealerViewDelegate=_eventStealerViewDelegate - In the implementation block
@property (nonatomic,retain) UIImageView * screenshotView;                                            //@synthesize screenshotView=_screenshotView - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                                     //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,readonly) GAXEventStealerView * eventStealerView; 
+(id)captureClientApplicationScreenshotWithInterfaceOrientation:(long long)arg1 screenBounds:(CGRect)arg2 screenScale:(double)arg3 opaque:(bool)arg4 contextIDs:(id)arg5 ;
-(void)setClientApplicationScreenshotImage:(id)arg1 ;
-(void)setShouldStealAllEvents:(bool)arg1 ;
-(bool)shouldStealAllEvents;
-(id)eventStealerViewDelegate;
-(void)releaseOutlets;
-(id)screenshotView;
-(id)interestAreaViewController;
-(void)setInterestAreaViewController:(id)arg1 ;
-(void)setEventStealerViewDelegate:(id)arg1 ;
-(id)clientApplicationScreenshotImage;
-(id)eventStealerView;
-(void)_resetScreenshotWithContainerView:(id)arg1 ;
-(void)_resetInterestAreaViewWithContainerView:(id)arg1 ;
-(void)setScreenshotView:(id)arg1 ;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillUnload;
-(id)shadowView;
-(void)setShadowView:(id)arg1 ;
-(void)setShadowAlpha:(double)arg1 ;
-(double)shadowAlpha;
@end
