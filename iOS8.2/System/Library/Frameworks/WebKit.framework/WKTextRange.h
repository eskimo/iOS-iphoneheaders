/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UITextRange.h>

@class NSArray;

@interface WKTextRange : UITextRange {

	CGRect _startRect;
	CGRect _endRect;
	char _isNone;
	char _isRange;
	char _isEditable;
	NSArray* _selectionRects;
	unsigned _selectedTextLength;

}

@property (assign,nonatomic) CGRect startRect;                         //@synthesize startRect=_startRect - In the implementation block
@property (assign,nonatomic) CGRect endRect;                           //@synthesize endRect=_endRect - In the implementation block
@property (assign,nonatomic) char isNone;                              //@synthesize isNone=_isNone - In the implementation block
@property (assign,nonatomic) char isRange;                             //@synthesize isRange=_isRange - In the implementation block
@property (assign,nonatomic) char isEditable;                          //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) unsigned selectedTextLength;              //@synthesize selectedTextLength=_selectedTextLength - In the implementation block
@property (nonatomic,copy) NSArray * selectionRects;                   //@synthesize selectionRects=_selectionRects - In the implementation block
+(id)textRangeWithState:(char)arg1 isRange:(char)arg2 isEditable:(char)arg3 startRect:(CGRect)arg4 endRect:(CGRect)arg5 selectionRects:(id)arg6 selectedTextLength:(unsigned)arg7 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(char)isEditable;
-(char)isEmpty;
-(CGRect)endRect;
-(id)start;
-(id)end;
-(char)_isRanged;
-(NSArray *)selectionRects;
-(char)_isCaret;
-(void)setStartRect:(CGRect)arg1 ;
-(void)setEndRect:(CGRect)arg1 ;
-(CGRect)startRect;
-(void)setIsNone:(char)arg1 ;
-(void)setIsRange:(char)arg1 ;
-(void)setIsEditable:(char)arg1 ;
-(void)setSelectedTextLength:(unsigned)arg1 ;
-(void)setSelectionRects:(NSArray *)arg1 ;
-(char)isRange;
-(char)isNone;
-(unsigned)selectedTextLength;
@end

