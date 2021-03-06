/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/NSSecureCoding.h>

@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {

	double _duration;
	double _delay;
	unsigned _options;
	int _curve;

}

@property (getter=_duration,nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
@property (getter=_delay,nonatomic,readonly) double delay;                    //@synthesize delay=_delay - In the implementation block
@property (getter=_curve,nonatomic,readonly) int curve;                       //@synthesize curve=_curve - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)_duration;
-(double)_delay;
-(int)_curve;
-(int)curve;
@end

