/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXSpringBoardActionHandlerHolder : NSObject {

	/*^block*/id _handler;
	int _type;
	NSString* _identifier;

}

@property (nonatomic,copy) id handler;                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)setIdentifier:(NSString *)arg1 ;
@end
