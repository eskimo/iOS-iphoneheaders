/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VCImageAttributeRules : NSObject {

	NSMutableDictionary* _imageAttributeRules;

}

@property (nonatomic,retain) NSMutableDictionary * imageAttributeRules;              //@synthesize imageAttributeRules=_imageAttributeRules - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableDictionary *)imageAttributeRules;
-(void)setImageAttributeRules:(NSMutableDictionary *)arg1 ;
-(id)extractDimensionsForInterface:(int)arg1 direction:(int)arg2 ;
-(void)swapSendAndReceiveRules;
-(void)addRuleForVideoPayload:(int)arg1 withDirection:(int)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 priority:(int)arg6 interface:(int)arg7 ;
-(void)interfaceKey:(id*)arg1 forInterface:(int)arg2 directionKey:(id*)arg3 forDirection:(int)arg4 ;
@end

