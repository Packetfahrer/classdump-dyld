/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@interface NSDate : NSObject <NSCopying, NSSecureCoding>
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)dateWithActiveSyncString:(id)arg1 ;
+(id)dateWithActiveSyncStringWithoutSeparators:(id)arg1 ;
+(id)dateWithActiveSyncStringFromYearMonthDay:(id)arg1 ;
+(id)mf_copyDateInCommonFormatsWithString:(id)arg1 ;
+(id)mf_copyLenientDateInCommonFormatsWithString:(id)arg1 ;
+(int)daysSince1970;
+(id)dateForDaysSince1970:(int)arg1 ;
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)dateWithNaturalLanguageString:(id)arg1 ;
+(id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2 ;
+(id)dateWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
+(id)dateWithDate:(id)arg1 ;
+(id)dateWithString:(id)arg1 ;
+(double)timeIntervalSinceReferenceDate;
+(id)distantFuture;
+(id)date;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)distantPast;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)dateWithTimeIntervalSinceReferenceDate:(double)arg1 ;
+(id)dateWithTimeIntervalSince1970:(double)arg1 ;
-(id)tzDateToDateInGMT:(id)arg1 ;
-(id)gmtDateToDateInTimeZone:(id)arg1 ;
-(id)nearestMidnight;
-(id)activeSyncString;
-(id)activeSyncStringWithoutSeparators;
-(id)activeSyncStringForYearMonthDay;
-(void)ml_bindToSQLiteStatement:(sqlite3_stmtRef)arg1 atPosition:(int)arg2 ;
-(id)mf_descriptionForMimeHeaders;
-(id)mf_replyPrefixForSender:(id)arg1 ;
-(id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2 ;
-(id)dateForDayInTimeZone:(id)arg1 ;
-(id)dateForEndOfDayInTimeZone:(id)arg1 ;
-(id)dateForDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2 ;
-(id)dateForEndOfDayInTimeZone:(id)arg1 fromTimeZone:(id)arg2 ;
-(BOOL)isAfterDate:(id)arg1 ;
-(BOOL)isBeforeDate:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(int)_web_compareDay:(id)arg1 ;
-(id)_web_RFC1123DateString;
-(BOOL)_web_isToday;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2 ;
-(id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3 ;
-(BOOL)isNSDate__;
-(id)initWithTimeIntervalSince1970:(double)arg1 ;
-(unsigned long)_cfTypeID;
-(id)initWithDate:(id)arg1 ;
-(id)addTimeInterval:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timeIntervalSinceReferenceDate;
-(double)timeIntervalSinceDate:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(id)initWithString:(id)arg1 ;
-(int)compare:(id)arg1 ;
-(BOOL)isEqualToDate:(id)arg1 ;
-(id)laterDate:(id)arg1 ;
-(id)earlierDate:(id)arg1 ;
-(id)dateByAddingTimeInterval:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2 ;
-(double)timeIntervalSinceNow;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(double)timeIntervalSince1970;
-(id)descriptionWithLocale:(id)arg1 ;
@end
