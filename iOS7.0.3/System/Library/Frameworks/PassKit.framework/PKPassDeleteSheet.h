/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@protocol PKPassDeleteDelegate;
@class UIActionSheet, PKPassView;

@interface PKPassDeleteSheet : NSObject <UIActionSheetDelegate> {

	UIActionSheet* _actionSheet;
	<PKPassDeleteDelegate>* _delegate;
	PKPassView* _passView;

}

@property (assign,nonatomic) <PKPassDeleteDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKPassView * passView;                          //@synthesize passView=_passView - In the implementation block
+(void)performPassbookDeleteWithView:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)initWithPassView:(id)arg1 ;
-(void)setPassView:(id)arg1 ;
-(void)_unregisterForEnterBackgroundNotification;
-(void)_registerForEnterBackgroundNotification;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)showInView:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)finished:(BOOL)arg1 ;
-(id)passView;
-(void)_startAnimation;
@end

