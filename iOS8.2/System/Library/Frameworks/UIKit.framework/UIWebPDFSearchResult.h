/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {

	NSArray* rotationAngles;
	unsigned pageIndex;
	NSArray* strings;
	NSString* string;
	NSArray* rects;
	CGRect boundingBox;

}

@property (assign,nonatomic) unsigned pageIndex; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) CGRect boundingBox; 
@property (nonatomic,retain) NSArray * strings; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,retain) NSArray * rotationAngles; 
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)strings;
-(void)setRects:(NSArray *)arg1 ;
-(NSArray *)rects;
-(CGRect)boundingBox;
-(NSArray *)rotationAngles;
-(unsigned)pageIndex;
-(void)setRotationAngles:(NSArray *)arg1 ;
-(void)setPageIndex:(unsigned)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
@end

