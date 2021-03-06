/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject {

	void* _line;
	NSATSTypesetter* _typesetter;
	NSRange _glyphRange;
	NSRange _characterRange;
	float _minPosition;
	float _maxPosition;
	long _elasticCharIndex;
	float _elasticRangeWidth;
	unsigned _hyphenGlyph;
	float _hyphenGlyphWidth;
	struct {
		unsigned _directionState : 2;
		unsigned _drawsOutside : 1;
		unsigned _isLineArray : 1;
		unsigned _reserved : 28;
	}  _flags;

}
-(void)dealloc;
-(void)_invalidate;
-(NSRange)glyphRange;
-(id)initWithTypesetter:(id)arg1 ;
-(void)layoutForStartingGlyphAtIndex:(unsigned)arg1 characterIndex:(unsigned)arg2 minPosition:(float)arg3 maxPosition:(float)arg4 lineFragmentRect:(CGRect)arg5 ;
-(NSRange)characterRange;
-(void)getTypographicLineHeight:(float*)arg1 baselineOffset:(float*)arg2 leading:(float*)arg3 ;
-(void)justifyWithFactor:(float)arg1 ;
-(float)lineWidthForType:(int)arg1 ;
-(char)hasElasticRange;
-(void)saveMorphedGlyphs:(NSRange*)arg1 ;
-(void)saveWithGlyphOrigin:(float)arg1 ;
-(id)_copyRenderingContextWithGlyphOrigin:(float)arg1 ;
-(void)_flushCachedObjects;
-(int)resolvedLineBreakMode:(char)arg1 ;
-(long)_charIndexToBreakLineByWordWrappingAtIndex:(long)arg1 lineFragmentWidth:(float)arg2 hyphenate:(char*)arg3 ;
-(void)finalize;
@end

