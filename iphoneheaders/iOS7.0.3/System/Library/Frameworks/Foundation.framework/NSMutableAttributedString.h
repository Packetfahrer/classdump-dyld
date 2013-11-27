/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(void)mf_addAttribute:(id)arg1 value:(id)arg2 ;
-(void)mf_removeAttribute:(id)arg1 ;
-(void)mf_setString:(id)arg1 ;
-(void)MP_addAttributes:(id)arg1 toOccurrencesOfSubstring:(id)arg2 options:(unsigned)arg3 ;
-(void)dd_makeLinksForResultsInAttributesOfType:(unsigned)arg1 context:(id)arg2 ;
-(void)dd_resetResults;
-(void)dd_urlifyResult:(id)arg1 withBlock:(/*^block*/ id)arg2 referenceDate:(id)arg3 ;
-(void)appendString:(id)arg1 withAttributes:(id)arg2 ;
-(void)appendString:(id)arg1 withAttributes:(id)arg2 ;
-(void)_ui_restoreOriginalFontAttributes;
-(void)scrcAppendFormat:(id)arg1 ;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)convertBidiControlCharactersToWritingDirection;
-(BOOL)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(void)fixGlyphInfoAttributeInRange:(NSRange)arg1 ;
-(void)fixFontAttributeInRange:(NSRange)arg1 ;
-(void)fixParagraphStyleAttributeInRange:(NSRange)arg1 ;
-(void)fixAttachmentAttributeInRange:(NSRange)arg1 ;
-(void)_changeIntAttribute:(id)arg1 by:(int)arg2 range:(NSRange)arg3 ;
-(BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(void)setBaseWritingDirection:(int)arg1 range:(NSRange)arg2 ;
-(NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned)arg1 ;
-(NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned)arg1 ;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(void)setAlignment:(int)arg1 range:(NSRange)arg2 ;
-(void)superscriptRange:(NSRange)arg1 ;
-(void)subscriptRange:(NSRange)arg1 ;
-(void)unscriptRange:(NSRange)arg1 ;
-(BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(void)convertWritingDirectionToBidiControlCharacters;
-(void)replaceNewlinesWithSpaces;
-(void)trimWhitespace;
-(void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3 ;
-(void)removeCharactersWithAttribute:(id)arg1 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addAttributesWeakly:(id)arg1 range:(NSRange)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)mutableString;
-(void)beginEditing;
-(void)endEditing;
-(void)setAttributedString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
@end
