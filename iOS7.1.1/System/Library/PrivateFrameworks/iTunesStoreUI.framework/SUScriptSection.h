/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject {

	NSString* _badgeValue;
	NSString* _identifier;
	bool _transient;
	SUScriptViewController* _viewController;

}

@property (retain) NSString * badgeValue; 
@property (readonly) NSString * identifier; 
@property (readonly) bool transient; 
@property (readonly) SUScriptViewController * viewController; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)viewController;
-(id)identifier;
-(void)setBadgeValue:(id)arg1 ;
-(id)badgeValue;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setBadgeValue:(id)arg1 animated:(bool)arg2 blink:(bool)arg3 ;
-(id)initWithNativeSection:(id)arg1 ;
-(bool)transient;
@end

