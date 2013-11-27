/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:47:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSWPTextStatistics : NSObject <NSCopying> {

	unsigned _wordCount;
	unsigned _charactersNoWhiteSpace;
	unsigned _paragraphCount;
	BOOL _isAccurate;

}

@property (assign,nonatomic) unsigned wordCount;                           //@synthesize wordCount=_wordCount - In the implementation block
@property (assign,nonatomic) unsigned charactersNoWhiteSpace;              //@synthesize charactersNoWhiteSpace=_charactersNoWhiteSpace - In the implementation block
@property (assign,nonatomic) unsigned paragraphCount;                      //@synthesize paragraphCount=_paragraphCount - In the implementation block
@property (assign,nonatomic) BOOL isAccurate;                              //@synthesize isAccurate=_isAccurate - In the implementation block
-(void)setParagraphCount:(unsigned)arg1 ;
-(void)setWordCount:(unsigned)arg1 ;
-(unsigned)charactersNoWhiteSpace;
-(void)setCharactersNoWhiteSpace:(unsigned)arg1 ;
-(void)setIsAccurate:(BOOL)arg1 ;
-(BOOL)isAccurate;
-(void)resetStatistics;
-(void)addTextStatistics:(id)arg1 ;
-(void)setTextStatistics:(id)arg1 ;
-(void)removeTextStatistics:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)paragraphCount;
-(unsigned)wordCount;
@end
