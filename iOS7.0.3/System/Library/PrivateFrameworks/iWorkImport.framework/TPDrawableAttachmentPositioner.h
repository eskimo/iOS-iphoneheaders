/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAttachmentPositioner.h>

@interface TPDrawableAttachmentPositioner : NSObject <TSDAttachmentPositioner>
-(id)commandForPositioningLayout:(id)arg1 withNewPosition:(CGPoint)arg2 interactiveCanvasController:(id)arg3 ;
-(id)commandForPositioningAttachment:(id)arg1 withNewPosition:(CGPoint)arg2 documentRoot:(id)arg3 dolcContext:(id)arg4 ;
-(void)p_constrainToPageLayout:(id)arg1 context:(TPConstrainToPageLayoutContext*)arg2 ;
-(void)p_positionAttachmentInPageLayout:(id)arg1 context:(TPPositionAttachmentContext*)arg2 ;
-(TSWPCharIndexAndPosition)positionForDrawable:(id)arg1 atPoint:(CGPoint)arg2 inTextLayoutTarget:(id)arg3 makeInline:(BOOL)arg4 ;
-(id)p_validatedLayoutForDrawable:(id)arg1 inLayoutTarget:(id)arg2 ;
-(TSWPCharIndexAndPosition)p_positionForDrawable:(id)arg1 atUnscaledCanvasPoint:(CGPoint)arg2 inBodyLayout:(id)arg3 ;
-(id)p_commandForPositioningAttachment:(id)arg1 inBodyLayout:(id)arg2 atUnscaledCanvasPoint:(CGPoint)arg3 dolcContext:(id)arg4 ;
-(TSWPCharIndexAndPosition)positionForDrawable:(id)arg1 atPoint:(CGPoint)arg2 inTextLayoutTarget:(id)arg3 documentRoot:(id)arg4 ;
@end

