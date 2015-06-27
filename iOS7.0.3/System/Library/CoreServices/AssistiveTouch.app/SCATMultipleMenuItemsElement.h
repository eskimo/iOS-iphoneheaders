/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElement.h>

@protocol SCATMultipleMenuItemsElementDelegate;
@class NSString, NSArray;

@interface SCATMultipleMenuItemsElement : SCATSimpleElement {

	NSString* _identifier;
	NSArray* _menuItems;
	<SCATMultipleMenuItemsElementDelegate>* _delegate;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                                            //@synthesize menuItems=_menuItems - In the implementation block
@property (assign,nonatomic) <SCATMultipleMenuItemsElementDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)scatIndicatesOwnFocus;
-(void)scatDidBecomeFocused:(BOOL)arg1 ;
-(BOOL)scatPerformAction:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setMenuItems:(id)arg1 ;
-(id)menuItems;
@end
