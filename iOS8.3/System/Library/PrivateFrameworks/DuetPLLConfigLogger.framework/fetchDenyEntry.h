/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:35:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DuetPLLConfigLogger.framework/DuetPLLConfigLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface fetchDenyEntry : NSObject {

	NSDate* _when;
	int _why;

}

@property (retain) NSDate * when;              //@synthesize when=_when - In the implementation block
@property (assign) int why;                    //@synthesize why=_why - In the implementation block
-(NSDate *)when;
-(id)init;
-(void)setWhen:(NSDate *)arg1 ;
-(int)why;
-(void)setWhy:(int)arg1 ;
@end

