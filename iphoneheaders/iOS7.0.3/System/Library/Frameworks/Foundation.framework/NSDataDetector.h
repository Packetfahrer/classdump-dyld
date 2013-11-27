/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpression.h>

@interface NSDataDetector : NSRegularExpression {

	unsigned long long _types;

}

@property (readonly) unsigned long long checkingTypes; 
+(id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id*)arg2 ;
+(void)initialize;
-(unsigned)numberOfCaptureGroups;
-(void)enumerateMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)initWithTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)checkingTypes;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)options;
-(id)initWithPattern:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)finalize;
-(id)pattern;
@end
