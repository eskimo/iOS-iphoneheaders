/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:24:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASPolicy.h>

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {

	NSMutableDictionary* _policyData;

}
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)perDomainDictsForPolicy;
-(void)_setPolicyData:(id)arg1 ;
-(void)_cleanUpPolicyData:(id)arg1 ;
@end

