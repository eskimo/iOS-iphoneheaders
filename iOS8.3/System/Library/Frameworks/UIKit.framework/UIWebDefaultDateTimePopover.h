/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebDateTimePopoverViewController;

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebDateTimePopoverViewController* _webDateTimeViewController;

}

@property (nonatomic,retain) UIWebDateTimePopoverViewController * _webDateTimeViewController;              //@synthesize webDateTimeViewController=_webDateTimeViewController - In the implementation block
-(void)dealloc;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)clear:(id)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(int)arg2 ;
-(void)set_webDateTimeViewController:(UIWebDateTimePopoverViewController *)arg1 ;
-(UIWebDateTimePopoverViewController *)_webDateTimeViewController;
@end

