/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {

	TSCEASTNodeArray* mAST;
	SCD_Struct_TS286 mFormulaID;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSCEASTNodeArray*)ast;
-(SCD_Struct_TS286)formulaID;
-(void)encodeToArchive:(TrackedReferenceArchive*)arg1 ;
-(void)dealloc;
-(id).cxx_construct;
@end
