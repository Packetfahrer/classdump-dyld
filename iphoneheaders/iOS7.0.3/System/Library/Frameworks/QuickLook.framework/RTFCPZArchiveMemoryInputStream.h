/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:32:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/RTFCPZArchiveInputStream.h>

@class NSData;

@interface RTFCPZArchiveMemoryInputStream : NSObject <RTFCPZArchiveInputStream> {

	NSData* mData;
	const char* mBytes;
	long long mSize;

}
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(unsigned*)arg4 ;
-(void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char*)arg3 ;
-(void)dealloc;
-(long long)size;
-(id)initWithData:(id)arg1 ;
@end
