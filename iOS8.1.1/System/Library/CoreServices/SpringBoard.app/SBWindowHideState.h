/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SBWindowHideState : NSObject {

	BOOL _hidden;
	double _desiredAlpha;

}

@property (getter=isHidden) BOOL hidden;              //@synthesize hidden=_hidden - In the implementation block
@property (assign) double desiredAlpha;               //@synthesize desiredAlpha=_desiredAlpha - In the implementation block
-(double)desiredAlpha;
-(void)setDesiredAlpha:(double)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
@end

