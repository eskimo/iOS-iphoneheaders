/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, TSDBezierPath;

@interface TSDHyperlinkRegion : NSObject {

	NSURL* mURL;
	TSDBezierPath* mBezierPath;

}

@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,retain) TSDBezierPath * bezierPath; 
+(id)hyperlinkRegionWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(id)initWithURL:(id)arg1 bezierPath:(id)arg2 ;
-(void)dealloc;
-(TSDBezierPath *)bezierPath;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setBezierPath:(TSDBezierPath *)arg1 ;
@end

