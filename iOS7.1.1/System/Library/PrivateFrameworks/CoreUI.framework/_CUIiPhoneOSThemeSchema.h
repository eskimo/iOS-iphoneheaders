/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeSchema.h>

@interface _CUIiPhoneOSThemeSchema : CUIThemeSchema
-(long long)schemaVersion;
-(const SCD_Struct_CU19*)elementCategoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementCategoryCount;
-(const SCD_Struct_CU22*)elementDefinitionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)elementDefinitionCount;
-(const SCD_Struct_CU22*)sortedElementDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU22*)elementDefinitionWithName:(id)arg1 ;
-(id)widgetNameForPartDefinition:(const SCD_Struct_CU21*)arg1 ;
-(id)schemaRenditionsForPartDefinition:(const SCD_Struct_CU21*)arg1 ;
-(const SCD_Struct_CU19*)categoryForElementDefinition:(const SCD_Struct_CU22*)arg1 ;
-(const SCD_Struct_CU22*)effectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU22*)sortedEffectDefinitionAtIndex:(unsigned long long)arg1 ;
-(const SCD_Struct_CU22*)effectDefinitionWithName:(id)arg1 ;
-(unsigned long long)effectDefinitionCount;
-(id)schemaEffectRenditionsForPartDefinition:(const SCD_Struct_CU21*)arg1 ;
-(const SCD_Struct_CU22*)_sortedElementDefinitions;
-(const SCD_Struct_CU22*)_sortedEffectDefinitions;
@end

