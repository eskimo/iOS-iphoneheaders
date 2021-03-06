/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:51 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UIKeyboardEmoji : NSObject {

	NSString* _emojiString;
	unsigned _variantMask;

}

@property (nonatomic,retain) NSString * emojiString;              //@synthesize emojiString=_emojiString - In the implementation block
@property (assign) unsigned variantMask;                          //@synthesize variantMask=_variantMask - In the implementation block
+(id)emojiWithString:(id)arg1 withVariantMask:(unsigned)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)emojiString;
-(unsigned)variantMask;
-(id)key;
-(void)setEmojiString:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 withVariantMask:(unsigned)arg2 ;
-(void)setVariantMask:(unsigned)arg1 ;
@end

