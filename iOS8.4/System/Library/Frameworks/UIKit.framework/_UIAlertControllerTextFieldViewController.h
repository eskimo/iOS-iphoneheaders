/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol _UIAlertControllerTextFieldViewControllerContaining;
@class NSMutableArray, NSArray;

@interface _UIAlertControllerTextFieldViewController : UITableViewController {

	NSMutableArray* textFieldViews;
	NSMutableArray* textFields;
	BOOL _textFieldsCanBecomeFirstResponder;
	id<_UIAlertControllerTextFieldViewControllerContaining> _container;

}

@property (assign,nonatomic) id<_UIAlertControllerTextFieldViewControllerContaining> container;              //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL textFieldsCanBecomeFirstResponder; 
@property (readonly) NSArray * textFields; 
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setContainer:(id<_UIAlertControllerTextFieldViewControllerContaining>)arg1 ;
-(id)textFieldAtIndex:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<_UIAlertControllerTextFieldViewControllerContaining>)container;
-(id)addTextFieldWithPlaceholder:(id)arg1 isSecure:(BOOL)arg2 ;
-(NSArray *)textFields;
-(void)setTextFieldsCanBecomeFirstResponder:(BOOL)arg1 ;
-(void)removeAllTextFields;
-(BOOL)textFieldsCanBecomeFirstResponder;
-(void)_returnKeyPressedInTextField:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(long long)numberOfTextFields;
-(double)_bottomMarginForTextFields;
@end
