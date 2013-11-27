/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TPDocumentRoot;

@interface TPFootnoteLayoutController : NSObject {

	TPDocumentRoot* _documentRoot;
	BOOL _bumpedDocumentEndnotesForPageBreak;

}

@property (nonatomic,readonly) <TSWPFootnoteMarkProvider> * footnoteMarkProvider;              //@synthesize documentRoot=_documentRoot - In the implementation block
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)footnoteMarkProvider;
-(NSRange)layoutFootnotesFromIndex:(unsigned)arg1 intoFootnoteContainer:(id)arg2 maxHeight:(float)arg3 pageCharRange:(NSRange)arg4 sectionCharRange:(NSRange)arg5 isLastSection:(BOOL)arg6 ;
-(NSRange)footnoteLayoutRangeForPageCharRange:(NSRange)arg1 ;
-(void)inflateFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2 ;
-(unsigned)p_layoutFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2 maxHeight:(float)arg3 measure:(BOOL)arg4 ;
-(id)p_footnoteReferenceStoragesInFootnoteIndexRange:(NSRange)arg1 ;
-(id)p_layoutForFootnoteReferenceStorage:(id)arg1 ;
-(NSRange)endnoteRangeForSectionCharRange:(NSRange)arg1 isLastSection:(BOOL)arg2 ;
@end
