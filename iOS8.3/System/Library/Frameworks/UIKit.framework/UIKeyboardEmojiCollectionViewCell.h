/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIKeyboardEmoji;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

	UILabel* _emojiLabel;
	UIKeyboardEmoji* _emoji;

}

@property (nonatomic,copy) UIKeyboardEmoji * emoji;              //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) int emojiFontSize; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)debugDescription;
-(UIKeyboardEmoji *)emoji;
-(void)setEmoji:(UIKeyboardEmoji *)arg1 ;
-(void)setEmojiFontSize:(int)arg1 ;
-(int)emojiFontSize;
@end

