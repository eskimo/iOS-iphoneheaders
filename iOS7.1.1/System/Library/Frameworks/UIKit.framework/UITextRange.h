/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject

@property (getter=_isCaret,nonatomic,readonly) bool isCaret; 
@property (getter=_isRanged,nonatomic,readonly) bool isRanged; 
@property (getter=_isImpl,nonatomic,readonly) UITextRangeImpl * isImpl; 
@property (getter=isEmpty,nonatomic,readonly) bool empty; 
@property (nonatomic,readonly) UITextPosition * start; 
@property (nonatomic,readonly) UITextPosition * end; 
-(bool)_isRanged;
-(bool)_isCaret;
-(id)_isImpl;
-(bool)isEmpty;
-(id)start;
-(id)end;
@end
