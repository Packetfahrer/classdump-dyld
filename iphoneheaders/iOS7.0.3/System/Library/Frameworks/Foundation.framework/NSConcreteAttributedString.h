/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {

	NSString* string;
	NSRLEArray* attributes;

}
-(id)_runArrayHoldingAttributes;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)string;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(id)initWithString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)finalize;
@end

