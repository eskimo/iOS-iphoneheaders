/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@class ABPersonViewControllerHelper, NSString;

@interface ABPersonViewController_DeletionDelegate : NSObject <UIActionSheetDelegate> {

	ABPersonViewControllerHelper* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPersonViewController:(id)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
