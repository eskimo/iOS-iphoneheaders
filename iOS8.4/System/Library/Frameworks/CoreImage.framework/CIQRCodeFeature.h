/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@class NSString;

@interface CIQRCodeFeature : CIFeature {

	CGRect bounds;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	NSString* messageString;

}

@property (assign) CGRect bounds; 
@property (assign) CGPoint topLeft; 
@property (assign) CGPoint topRight; 
@property (assign) CGPoint bottomLeft; 
@property (assign) CGPoint bottomRight; 
@property (copy) NSString * messageString; 
+(id)barcodeFeatureWithBounds:(CGRect)arg1 ;
+(id)barcodeFeaturesWithBoundsArray:(const CGRect*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(CGPoint)topLeft;
-(void)setTopLeft:(CGPoint)arg1 ;
-(CGPoint)topRight;
-(void)setTopRight:(CGPoint)arg1 ;
-(CGPoint)bottomLeft;
-(void)setBottomLeft:(CGPoint)arg1 ;
-(CGPoint)bottomRight;
-(void)setBottomRight:(CGPoint)arg1 ;
-(id)initWithBounds:(CGRect)arg1 topLeft:(CGPoint)arg2 topRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 bottomRight:(CGPoint)arg5 messageString:(id)arg6 ;
-(NSString *)messageString;
-(void)setMessageString:(NSString *)arg1 ;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(id)type;
@end

