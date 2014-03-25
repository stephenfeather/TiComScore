#import <Foundation/Foundation.h>

void *CSNewBase64Decode(const char *inputBuffer, size_t length, size_t *outputLength);

char *CSNewBase64Encode(const void *inputBuffer, size_t length, bool separateLines, size_t *outputLength);

@interface NSData (CSBase64)

+(NSData *)dataFromBase64String:(NSString *)aString;
-(NSString *)base64EncodedString;

@end
