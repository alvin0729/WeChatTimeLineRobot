/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

@interface MMMusicLyricResolver : XXUnknownSuperclass {
	NSString* _lyrics;
	NSMutableArray* _lyricsList;
	NSMutableArray* _timeList;
	BOOL _isLyricListContainsEmptyStr;
}
@property(retain, nonatomic) NSMutableArray* timeList;
@property(retain, nonatomic) NSMutableArray* lyricsList;
@property(retain, nonatomic) NSString* lyrics;
-(void).cxx_destruct;
-(void)dealloc;
-(double)getDuaration;
-(int)getCurrentIndexWithTime:(float)time;
-(float)time_StringToFloat:(id)aFloat;
-(BOOL)resolveLyrics:(id)lyrics;
-(id)init;
@end
