/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIViewServiceInterface.h>

@class _UIViewServiceSessionEndpoint;

@interface _UIViewServiceInterface_XPCObjects : _UIViewServiceInterface {

	_UIViewServiceSessionEndpoint* _serviceSessionEndpoint;

}
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)connectToDeputyOfType:(id)arg1 connectionHandler:(/*^block*/ id)arg2 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI83)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
@end

