/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBLineFragment : NSObject {

	unsigned _index;
	float _lineWidth;
	NSRange _range;

}

@property (assign,nonatomic) unsigned index;               //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) NSRange range;                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) float lineWidth;              //@synthesize lineWidth=_lineWidth - In the implementation block
+(id)fragmentWithIndex:(unsigned)arg1 length:(unsigned)arg2 lineWidth:(float)arg3 ;
-(id)description;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(unsigned)index;
-(NSRange)range;
-(void)setIndex:(unsigned)arg1 ;
-(void)setRange:(NSRange)arg1 ;
@end

