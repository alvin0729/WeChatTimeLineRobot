/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"


@protocol MMQRCodeScannerDelegate
-(void)onQRCodeScanSuccess:(id)success atPoint:(vector<QBAR_POINT, std::__1::allocator<QBAR_POINT> >)point originSize:(CGSize)size;
-(void)onNoQRCode;
@end
