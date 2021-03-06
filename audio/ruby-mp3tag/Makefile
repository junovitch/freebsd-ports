# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD$

PORTNAME=	mp3tag
PORTVERSION=	1.0
CATEGORIES=	audio ruby
MASTER_SITES=	LOCAL/sunpoet/ruby
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby module to manipulate ID3v1.1 tags in MP3 files

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

OPTIONS_DEFINE=	DOCS EXAMPLES

NO_ARCH=	yes
NO_BUILD=	yes
USE_RUBY=	yes
USE_RUBY_RDOC=	yes

RUBY_RD_FILES=	mp3tag.rb

DOCS=		README \
		${RUBY_RD_HTML_FILES}

post-patch:
	@${REINPLACE_CMD} -E \
		-e "s,^(require[[:space:]]+')\./mp3tag(.*),\1mp3tag\2," \
		${WRKSRC}/mp3tag_test.rb

do-install:
	${MKDIR} ${STAGEDIR}${RUBY_SITELIBDIR}/
	${INSTALL_DATA} ${WRKSRC}/mp3tag.rb ${STAGEDIR}${RUBY_SITELIBDIR}/

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${RUBY_MODDOCDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${RUBY_MODDOCDIR}/

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${RUBY_MODEXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/mp3tag_test.rb ${STAGEDIR}${RUBY_MODEXAMPLESDIR}/

.include <bsd.port.mk>
