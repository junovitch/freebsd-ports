# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD$

PORTNAME=	IO-Async
PORTVERSION=	0.68
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PEVANS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl modules that implement asynchronous filehandle IO

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Future>=0.26:${PORTSDIR}/devel/p5-Future \
		p5-Struct-Dumb>0:${PORTSDIR}/devel/p5-Struct-Dumb
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal \
		p5-Test-Identity>=0:${PORTSDIR}/devel/p5-Test-Identity \
		p5-Test-Pod>=1:${PORTSDIR}/devel/p5-Test-Pod \
		p5-Test-Refcount>=0:${PORTSDIR}/devel/p5-Test-Refcount

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501800
BUILD_DEPENDS+=	p5-Socket>=2.007:${PORTSDIR}/net/p5-Socket
RUN_DEPENDS+=	p5-Socket>=2.007:${PORTSDIR}/net/p5-Socket
.endif

.include <bsd.port.post.mk>
