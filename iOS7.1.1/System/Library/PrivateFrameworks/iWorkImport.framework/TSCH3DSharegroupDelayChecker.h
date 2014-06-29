/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>

@protocol TSCH3DSharegroupDelayCheckerParent;
@interface TSCH3DSharegroupDelayChecker : NSObject <TSCHUnretainedParent> {

	bool mCondition;
	<TSCH3DSharegroupDelayCheckerParent>* mParent;

}

@property (assign,nonatomic) bool condition; 
-(void)p_checkCondition;
-(void)p_scheduleCheckConditionOnMainThread;
-(void)p_cancelCheckCondition;
-(void)clearParent;
-(void)scheduleCheckCondition;
-(void)invalidateCondition;
-(void)dealloc;
-(bool)condition;
-(void)setCondition:(bool)arg1 ;
-(id)initWithParent:(id)arg1 ;
@end
