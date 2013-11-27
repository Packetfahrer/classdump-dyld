/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation
-(id)url;
-(unsigned)pageNumber;
-(BOOL)recognizeGestures;
-(BOOL)shouldRecognizeTapOrPress:(CGPoint)arg1 ;
-(id)newBaseURL;
-(unsigned)getDestination:(CGPDFDictionaryRef)arg1 ;
-(unsigned)getNamedDestination:(CGPDFDictionaryRef)arg1 ;
-(BOOL)quadPoints:(CGPDFArrayRef)arg1 within:(CGRect)arg2 ;
-(CGRect)linkRectangle;
@end
