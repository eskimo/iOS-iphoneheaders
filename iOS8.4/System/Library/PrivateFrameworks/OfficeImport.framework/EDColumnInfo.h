/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/EDKeyedObject.h>

@class EDResources, EDWorksheet, EDReference, NSString;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {

	EDResources* mResources;
	EDWorksheet* mWorksheet;
	int mWidth;
	BOOL mHidden;
	EDReference* mRange;
	unsigned long long mStyleIndex;
	unsigned char mOutlineLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2 ;
-(unsigned long long)styleIndex;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(void)setWidthInXlUnits:(int)arg1 ;
-(int)widthInXlUnits;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(long long)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(double)width;
-(id)range;
-(void)setWidth:(double)arg1 ;
-(void)setRange:(id)arg1 ;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2 ;
-(void)setOutlineLevel:(unsigned char)arg1 ;
-(unsigned char)outlineLevel;
@end
