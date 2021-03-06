/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDSStyle;

@interface GQHBulletInfo : NSObject {

	int mType;
	int mBulletIndent;
	int mTextIndent;
	CFStringRef mChar;
	BOOL mHasNumber;
	int mNumber;
	int mLabelType;
	GQDSStyle* mStyle;

}
-(int)labelType;
-(void)setBulletIndent:(int)arg1 ;
-(void)setHasNumber:(BOOL)arg1 ;
-(BOOL)hasNumber;
-(void)setLabelType:(int)arg1 ;
-(void)setBulletChar:(CFStringRef)arg1 ;
-(CFStringRef)bulletChar;
-(int)bulletIndent;
-(CFStringRef)createTierStringNumber;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(void)setNumber:(int)arg1 ;
-(int)number;
-(int)textIndent;
-(void)setTextIndent:(int)arg1 ;
@end

